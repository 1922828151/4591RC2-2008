/*
 * func-name: ?ValidateSerial@Engine@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100954b0
 * callers: none
 * callees: none
 */

char __stdcall Engine::ValidateSerial(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  const char *v9; // eax
  int v10; // ebp
  int v11; // eax
  const char *v12; // eax
  int v13; // esi
  int v14; // eax
  const char *v15; // eax
  int v16; // edi
  _BYTE v17[28]; // [esp+4h] [ebp-C0h] BYREF
  _SYSTEMTIME SystemTime; // [esp+20h] [ebp-A4h] BYREF
  _BYTE v19[136]; // [esp+30h] [ebp-94h] BYREF
  int v20; // [esp+C0h] [ebp-4h]

  v20 = 0;
  if ( (unsigned int)std::string::length(&a1) >= 0x13 )
  {
    v8 = std::string::substr(&a1, v17, 10, 2);
    LOBYTE(v20) = 1;
    v9 = (const char *)std::string::c_str(v8);
    v10 = atoi(v9);
    LOBYTE(v20) = 0;
    std::string::~string(v17);
    v11 = std::string::substr(&a1, v17, 12, 2);
    LOBYTE(v20) = 2;
    v12 = (const char *)std::string::c_str(v11);
    v13 = atoi(v12);
    LOBYTE(v20) = 0;
    std::string::~string(v17);
    GetSystemTime(&SystemTime);
    if ( SystemTime.wMonth <= v13
      && (SystemTime.wDay <= v10 || SystemTime.wMonth != v13)
      && (v14 = std::string::substr(&a1, v17, 15, 4),
          LOBYTE(v20) = 3,
          v15 = (const char *)std::string::c_str(v14),
          v16 = atoi(v15),
          LOBYTE(v20) = 0,
          std::string::~string(v17),
          v16 == v10 + v13) )
    {
      std::ofstream::ofstream(v19, "serial.dat", 2, 64, 1);
      LOBYTE(v20) = 4;
      std::operator<<<char>(v19, &a1);
      std::ofstream::close(v19);
      LOBYTE(v20) = 0;
      std::ofstream::`vbase destructor'(v19);
      v20 = -1;
      std::string::~string(&a1);
      return 1;
    }
    else
    {
      v20 = -1;
      std::string::~string(&a1);
      return 0;
    }
  }
  else
  {
    v20 = -1;
    std::string::~string(&a1);
    return 0;
  }
}
