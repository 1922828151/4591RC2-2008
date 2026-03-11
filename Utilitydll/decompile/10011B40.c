/*
 * func-name: sub_10011B40
 * func-address: 0x10011b40
 * callers: none
 * callees: 0x1000fcb0, 0x1000fd30, 0x100103f0, 0x10010480, 0x10018cf2, 0x10018e10
 */

int __thiscall sub_10011B40(_DWORD **this, int a2)
{
  _DWORD **v2; // esi
  int v3; // ebp
  const WCHAR *v4; // esi
  LPSTR v5; // edi
  UINT ACP; // edi
  int v7; // ebp
  const WCHAR *v8; // ebp
  CHAR *v9; // esi
  UINT v10; // esi
  int v11; // ebx
  int v13; // [esp+14h] [ebp-108h]
  int v14; // [esp+18h] [ebp-104h]
  CHAR *v15; // [esp+18h] [ebp-104h]
  char v16; // [esp+1Fh] [ebp-FDh] BYREF
  _DWORD **v17; // [esp+20h] [ebp-FCh]
  int v18; // [esp+24h] [ebp-F8h]
  LPSTR v19; // [esp+28h] [ebp-F4h]
  LPSTR v20; // [esp+2Ch] [ebp-F0h]
  CHAR *v21; // [esp+30h] [ebp-ECh]
  int v22[10]; // [esp+34h] [ebp-E8h] BYREF
  _BYTE v23[28]; // [esp+5Ch] [ebp-C0h] BYREF
  _BYTE v24[28]; // [esp+78h] [ebp-A4h] BYREF
  _BYTE v25[28]; // [esp+94h] [ebp-88h] BYREF
  _BYTE v26[28]; // [esp+B0h] [ebp-6Ch] BYREF
  _BYTE v27[28]; // [esp+CCh] [ebp-50h] BYREF
  _BYTE v28[28]; // [esp+E8h] [ebp-34h] BYREF
  char v29[12]; // [esp+104h] [ebp-18h] BYREF
  int v30; // [esp+118h] [ebp-4h]

  v2 = this;
  v17 = this;
  v18 = 0;
  sub_100103F0((int)v22, &v16);
  v30 = 2;
  if ( v2[2] )
  {
    v13 = 0;
    if ( (*(int (__thiscall **)(_DWORD *))(*v2[2] + 16))(v2[2]) )
    {
      while ( 1 )
      {
        v3 = (*(int (__thiscall **)(_DWORD *, int))(*v2[2] + 8))(v2[2], v13);
        v14 = v3;
        v4 = (const WCHAR *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
        if ( v4 )
        {
          ACP = GetACP();
          v7 = WideCharToMultiByte(ACP, 0, v4, -1, 0, 0, 0, 0);
          v19 = (LPSTR)operator new(v7);
          WideCharToMultiByte(ACP, 0, v4, -1, v19, v7, 0, 0);
          v5 = v19;
          v3 = v14;
        }
        else
        {
          v5 = 0;
        }
        v20 = v5;
        LOBYTE(v30) = 5;
        std::string::string(v23, v5);
        LOBYTE(v30) = 6;
        v8 = (const WCHAR *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
        if ( v8 )
        {
          v10 = GetACP();
          v11 = WideCharToMultiByte(v10, 0, v8, -1, 0, 0, 0, 0);
          v15 = (CHAR *)operator new(v11);
          WideCharToMultiByte(v10, 0, v8, -1, v15, v11, 0, 0);
          v9 = v15;
        }
        else
        {
          v9 = 0;
        }
        v21 = v9;
        LOBYTE(v30) = 7;
        std::string::string(v24, v9);
        LOBYTE(v30) = 8;
        std::string::string(v25, v24);
        LOBYTE(v30) = 9;
        std::string::string(v26, v23);
        LOBYTE(v30) = 11;
        std::string::string(v27, v25);
        LOBYTE(v30) = 12;
        std::string::string(v28, v26);
        LOBYTE(v30) = 14;
        sub_1000FD30(v22, (int)v29, (int)v27);
        LOBYTE(v30) = 15;
        std::string::~string(v28);
        LOBYTE(v30) = 11;
        std::string::~string(v27);
        LOBYTE(v30) = 17;
        std::string::~string(v26);
        LOBYTE(v30) = 8;
        std::string::~string(v25);
        LOBYTE(v30) = 7;
        std::string::~string(v24);
        LOBYTE(v30) = 6;
        operator delete(v9);
        LOBYTE(v30) = 5;
        std::string::~string(v23);
        LOBYTE(v30) = 2;
        operator delete(v5);
        if ( ++v13 >= (unsigned int)(*(int (__thiscall **)(_DWORD *))(*v17[2] + 16))(v17[2]) )
          break;
        v2 = v17;
      }
    }
  }
  sub_10010480(v22, a2);
  v18 = 1;
  v30 = 0;
  sub_1000FCB0((int)v22);
  return a2;
}
