# DDS_IEC61850_Gateway
The DDS to IEC 61850 gateway for microgrid network. This project necessary to MMS-Lite and OpenDDS API. Please install in advance above APIs.

### Configuration
1. Set up MMS-Lite API.
2. Set up OpenDDS ver.3.13 with Xerces and security module on MMS-Lite API's root directory.
3. Paste this project to OpenDDS API's root directory.
4. Go to the $(DDS_ROOT)/PulicIOT/ and typing command make.

### How To Run
Server side: #./DDS_Server -DCPSConfigFile rtps_DDS_Server.ini
Client side: #./DDS_Client -DCPSConfigFile rtps_DDS_Client.ini (if you use IEC61850 server, add -m option.)

### Protocol Stack
Gate way server has dual protocol stacks, One is MMS protocol to communicating with relay, ESS, other electrical devices.
Another is DDS protocol to communicating Gateway Client through public internet network.
Therefore, Client side has only one DDS protocol stack.

![통신architecture](https://user-images.githubusercontent.com/23163982/81475936-0f4a8a80-924a-11ea-87f1-446c97646c00.png)
