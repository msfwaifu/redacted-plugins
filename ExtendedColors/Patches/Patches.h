class Patches
{
	public:

		static void Apply();

	private:
		static bool skipStringClean;

		static void ICleanStr_Stub();

		static void ClientUserinfoChanged_Stub();
		static char* CL_GetClientName_Stub(LocalClientNum_t localClientNum, int index, char *buf, int _size, bool addClanName);
};