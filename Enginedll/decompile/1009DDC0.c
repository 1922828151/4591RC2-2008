/*
 * func-name: ?CopyPrt@ModelFrame@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1009ddc0
 * callers: 0x10085820, 0x1009ddc0
 * callees: 0x10009f20, 0x1009ddc0
 */

int __thiscall ModelFrame::CopyPrt(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ecx
  int v10; // ebp
  DWORD TickCount; // eax
  int v12; // ecx
  DWORD v13; // ebp
  int v14; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  const CHAR *v24; // eax
  int v25; // eax
  int v26; // eax
  char v28; // [esp-1Ch] [ebp-C8h] BYREF
  int v29; // [esp-18h] [ebp-C4h]
  int v30; // [esp-14h] [ebp-C0h]
  int v31; // [esp-10h] [ebp-BCh]
  int v32; // [esp-Ch] [ebp-B8h]
  LPCSTR v33; // [esp-8h] [ebp-B4h]
  int v34; // [esp-4h] [ebp-B0h]
  char *v35; // [esp+10h] [ebp-9Ch]
  _BYTE v36[28]; // [esp+14h] [ebp-98h] BYREF
  _BYTE v37[28]; // [esp+30h] [ebp-7Ch] BYREF
  _BYTE v38[28]; // [esp+4Ch] [ebp-60h] BYREF
  _BYTE v39[28]; // [esp+68h] [ebp-44h] BYREF
  _BYTE v40[28]; // [esp+84h] [ebp-28h] BYREF
  int v41; // [esp+A8h] [ebp-4h]

  v9 = this[1];
  v41 = 0;
  if ( v9 && (this[2] - v9) >> 2 && *(_DWORD *)this[1] )
  {
    v10 = rand();
    TickCount = GetTickCount();
    v12 = this[1];
    v13 = TickCount + v10;
    if ( v12 && (this[2] - v12) >> 2 )
      v14 = *(_DWORD *)this[1];
    else
      v14 = 0;
    if ( (unsigned __int8)std::operator!=<char>(v14 + 2383, &unk_101C46BB) )
    {
      std::string::string(v38, &a2);
      v15 = this[1];
      v16 = v13 + 1;
      LOBYTE(v41) = 1;
      if ( v15 && (this[2] - v15) >> 2 )
        v17 = *(_DWORD *)this[1];
      else
        v17 = 0;
      v18 = std::operator+<char>(v40, v38, v17 + 2383);
      LOBYTE(v41) = 2;
      std::operator+<char>(v39, v18, ".prt");
      LOBYTE(v41) = 4;
      std::string::~string(v40);
      v19 = this[1];
      if ( v19 && (this[2] - v19) >> 2 )
        v20 = *(_DWORD *)this[1];
      else
        v20 = 0;
      std::string::string(v36, v20 + 2383);
      LOBYTE(v41) = 5;
      if ( (unsigned int)std::string::length(v36) > 5 )
      {
        v21 = std::string::substr(v36, v37, 0, 4);
        LOBYTE(v41) = 6;
        std::string::operator=(v36, v21);
        LOBYTE(v41) = 5;
        std::string::~string(v37);
      }
      v22 = sub_10009F20((int)v37, v16);
      LOBYTE(v41) = 7;
      std::string::operator+=(v36, v22);
      LOBYTE(v41) = 5;
      std::string::~string(v37);
      v23 = std::operator+<char>(v37, v36, ".prt");
      LOBYTE(v41) = 8;
      std::string::operator+=(v38, v23);
      LOBYTE(v41) = 5;
      std::string::~string(v37);
      v33 = (LPCSTR)std::string::c_str(v38);
      v24 = (const CHAR *)std::string::c_str(v39);
      CopyFileA(v24, v33, 1);
      v25 = this[1];
      if ( v25 && (this[2] - v25) >> 2 )
        v26 = *(_DWORD *)this[1];
      else
        v26 = 0;
      std::string::operator=(v26 + 2383, v36);
      LOBYTE(v41) = 4;
      std::string::~string(v36);
      LOBYTE(v41) = 1;
      std::string::~string(v39);
      LOBYTE(v41) = 0;
      std::string::~string(v38);
    }
  }
  if ( this[89] )
  {
    v35 = &v28;
    std::string::string(&v28, &a2);
    ModelFrame::CopyPrt(v28, v29, v30, v31, v32, v33, v34);
  }
  if ( this[90] )
  {
    v35 = &v28;
    std::string::string(&v28, &a2);
    ModelFrame::CopyPrt(v28, v29, v30, v31, v32, v33, v34);
  }
  v41 = -1;
  return std::string::~string(&a2);
}
