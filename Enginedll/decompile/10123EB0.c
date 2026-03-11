/*
 * func-name: ??1Shader@@QAE@XZ
 * func-address: 0x10123eb0
 * callers: 0x100e68a0, 0x10124ed0
 * callees: 0x1000d3d0, 0x100e2550, 0x10122c20, 0x10126ca0, 0x101a26a0
 */

void __thiscall Shader::~Shader(Shader *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // ebp
  int i; // edi
  unsigned int v5; // edi
  unsigned int v6; // edi
  int v7; // eax
  char v8[4]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v2 = dword_11241870;
  v3 = 0;
  v10 = 53;
  for ( i = 0; ; i += 32 )
  {
    if ( (dword_112418C8 & 1) == 0 )
    {
      dword_112418C8 |= 1u;
      ShaderManager::ShaderManager((ShaderManager *)&unk_112417F8);
      atexit(sub_101B95C0);
      v2 = dword_11241870;
      LOBYTE(v10) = 53;
    }
    if ( !v2 || v3 >= (int)(dword_11241874 - v2) >> 5 )
      break;
    if ( (dword_112418C8 & 1) == 0 )
    {
      dword_112418C8 |= 1u;
      ShaderManager::ShaderManager((ShaderManager *)&unk_112417F8);
      atexit(sub_101B95C0);
      v2 = dword_11241870;
      LOBYTE(v10) = 53;
    }
    if ( !v2 || v3 >= (int)(dword_11241874 - v2) >> 5 )
    {
      invalid_parameter_noinfo();
      v2 = dword_11241870;
    }
    if ( this == *(Shader **)(i + v2 + 28) )
    {
      if ( (dword_112418C8 & 1) == 0 )
      {
        dword_112418C8 |= 1u;
        ShaderManager::ShaderManager((ShaderManager *)&unk_112417F8);
        atexit(sub_101B95C0);
        v2 = dword_11241870;
        LOBYTE(v10) = 53;
      }
      v5 = v2;
      if ( v2 > dword_11241874 )
      {
        invalid_parameter_noinfo();
        v2 = dword_11241870;
      }
      v9 = v5;
      v6 = 32 * v3 + v5;
      if ( v6 > dword_11241874 || v6 < v2 )
        invalid_parameter_noinfo();
      if ( (dword_112418C8 & 1) == 0 )
      {
        dword_112418C8 |= 1u;
        ShaderManager::ShaderManager((ShaderManager *)&unk_112417F8);
        atexit(sub_101B95C0);
        LOBYTE(v10) = 53;
      }
      sub_10126CA0(v8, &unk_1124186C, v6);
      break;
    }
    ++v3;
  }
  v7 = *((_DWORD *)this + 4);
  if ( v7 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*((_DWORD *)this + 4));
    *((_DWORD *)this + 4) = 0;
  }
  LogPrintf("Del shader: %d", ++dword_112418CC);
  LOBYTE(v10) = 52;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 14248));
  LOBYTE(v10) = 51;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 13968));
  LOBYTE(v10) = 50;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 13688));
  LOBYTE(v10) = 49;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 13408));
  LOBYTE(v10) = 48;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 13128));
  LOBYTE(v10) = 47;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 12848));
  LOBYTE(v10) = 46;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 12568));
  LOBYTE(v10) = 45;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 12288));
  LOBYTE(v10) = 44;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 12008));
  LOBYTE(v10) = 43;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 11728));
  LOBYTE(v10) = 42;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 11448));
  LOBYTE(v10) = 41;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 11168));
  LOBYTE(v10) = 40;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 10888));
  LOBYTE(v10) = 39;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 10608));
  LOBYTE(v10) = 38;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 10328));
  LOBYTE(v10) = 37;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 10048));
  LOBYTE(v10) = 36;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 9768));
  LOBYTE(v10) = 35;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 9488));
  LOBYTE(v10) = 34;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 9208));
  LOBYTE(v10) = 33;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 8928));
  LOBYTE(v10) = 32;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 8648));
  LOBYTE(v10) = 31;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 8368));
  LOBYTE(v10) = 30;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 8088));
  LOBYTE(v10) = 29;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 7808));
  LOBYTE(v10) = 28;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 7528));
  LOBYTE(v10) = 27;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 7248));
  LOBYTE(v10) = 26;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 6968));
  LOBYTE(v10) = 25;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 6688));
  LOBYTE(v10) = 24;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 6408));
  LOBYTE(v10) = 23;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 6128));
  LOBYTE(v10) = 22;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 5848));
  LOBYTE(v10) = 21;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 5568));
  LOBYTE(v10) = 20;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 5288));
  LOBYTE(v10) = 19;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 5008));
  LOBYTE(v10) = 18;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 4728));
  LOBYTE(v10) = 17;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 4448));
  LOBYTE(v10) = 16;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 4168));
  LOBYTE(v10) = 15;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 3888));
  LOBYTE(v10) = 14;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 3608));
  LOBYTE(v10) = 13;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 3328));
  LOBYTE(v10) = 12;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 3048));
  LOBYTE(v10) = 11;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 2768));
  LOBYTE(v10) = 10;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 2488));
  LOBYTE(v10) = 9;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 2208));
  LOBYTE(v10) = 8;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 1928));
  LOBYTE(v10) = 7;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 1648));
  LOBYTE(v10) = 6;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 1368));
  LOBYTE(v10) = 5;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 1088));
  LOBYTE(v10) = 4;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 808));
  LOBYTE(v10) = 3;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 528));
  LOBYTE(v10) = 2;
  ShaderVar::~ShaderVar((Shader *)((char *)this + 248));
  LOBYTE(v10) = 1;
  std::string::~string((char *)this + 216);
  LOBYTE(v10) = 0;
  std::string::~string((char *)this + 188);
  v10 = -1;
  std::string::~string((char *)this + 24);
}
