/*
* Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
* more contributor license agreements. See the NOTICE file distributed
* with this work for additional information regarding copyright ownership.
* Green Energy Corp licenses this file to you under the Apache License,
* Version 2.0 (the "License"); you may not use this file except in
* compliance with the License.  You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* This project was forked on 01/01/2013 by Automatak, LLC and modifications
* may have been made to this file. Automatak, LLC licenses these modifications
* to you under the terms of the License.
*/

#include "asiodnp3/MasterTCPServer.h"

#include <openpal/logging/LogMacros.h>
#include <opendnp3/LogLevels.h>

using namespace opendnp3;
using namespace asiopal;

namespace asiodnp3
{			

std::shared_ptr<MasterTCPServer> MasterTCPServer::Create(
	asio::io_service& ioservice, 
	IShutdownHandler<MasterTCPServer>& shutdown,
	openpal::Logger logger,
	asiopal::IPEndpoint endpoint,
	std::error_code& ec
)
{
	auto ret = std::shared_ptr<MasterTCPServer>(new MasterTCPServer(ioservice, shutdown, logger, endpoint, ec));
	ret->StartAccept();
	return ret;
}

MasterTCPServer::MasterTCPServer(
		asio::io_service& ioservice,
		IShutdownHandler<MasterTCPServer>& shutdown, 
		openpal::Logger logger,
		asiopal::IPEndpoint endpoint, 
		std::error_code& ec
) :
	TCPServer(ioservice, logger, endpoint, ec),
	m_shutdown(&shutdown)
{

}
				
void MasterTCPServer::AcceptConnection(asio::ip::tcp::socket socket)
{
	std::ostringstream oss;
	oss << socket.remote_endpoint();
	FORMAT_LOG_BLOCK(m_logger, flags::INFO, "Accepted connection from: %s", oss.str().c_str());

	// TODO - create a parser/handler and begin reading
	socket.close();
}

void MasterTCPServer::OnShutdown()
{
	m_shutdown->OnShutdown(*this);
}
	
}


