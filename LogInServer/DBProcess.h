#pragma once

#include "../shared/database/OdbcConnection.h"

class CDBProcess  
{
public:
	bool Connect(std::string & szDSN, std::string & szUser, std::string & szPass);

	bool LoadVersionList();
	bool LoadUserCountList();

<<<<<<< HEAD
	uint16 AccountLogin(std::string & id, std::string & pwd);
	int16 AccountPremium(std::string & id);
=======
	uint16 AccountLogin(std::string & strAccountID, std::string & strPasswd);
	int16 AccountPremium(std::string & strAccountID);
>>>>>>> koserver2

private:
	OdbcConnection m_dbConnection;
};