/*
 * func-name: ??0CREStatic@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c7520
 * callers: 0x1006a010, 0x100c8100, 0x100c82d0, 0x100caf60, 0x100cb5e0, 0x100cbe90, 0x100cc570, 0x100cc600, 0x100cc710, 0x100ccf60, 0x100cd910, 0x100d84a0, 0x1014a750, 0x1014fff0, 0x10155c10, 0x10156ed0, 0x1015ac30
 * callees: 0x100a5d90, 0x100c6ff0, 0x100d35b0, 0x100d36c0, 0x100d37d0, 0x100d38e0, 0x101a2500
 */

CREStatic *__thiscall CREStatic::CREStatic(CREStatic *this, struct CREDialog *a2)
{
  int v3; // edi
  bool v4; // cc
  _DWORD *v5; // ecx
  int v6; // ecx
  void (__thiscall *v7)(CREStatic *); // edx
  void (__thiscall *v8)(CREStatic *); // edx
  char v10; // [esp-20h] [ebp-5Ch] BYREF
  int v11; // [esp-1Ch] [ebp-58h]
  int v12; // [esp-18h] [ebp-54h]
  int v13; // [esp-14h] [ebp-50h]
  int v14; // [esp-10h] [ebp-4Ch]
  int v15; // [esp-Ch] [ebp-48h]
  int v16; // [esp-8h] [ebp-44h]
  const char *v17; // [esp-4h] [ebp-40h]
  CREStatic *v18; // [esp+10h] [ebp-2Ch]
  _BYTE v19[28]; // [esp+14h] [ebp-28h] BYREF
  int v20; // [esp+38h] [ebp-4h]

  v18 = this;
  CREControl::CREControl(this, 0);
  v20 = 0;
  *(_DWORD *)this = &CREStatic::`vftable';
  std::wstring::wstring((char *)this + 532);
  std::wstring::wstring((char *)this + 656);
  LOBYTE(v20) = 2;
  *((_DWORD *)this + 35) = 2;
  *((_DWORD *)this + 28) = a2;
  std::wstring::clear((char *)this + 532);
  v17 = 0;
  v16 = -931102592;
  v15 = -1;
  *((_DWORD *)this + 140) = 0;
  REBlendColor::Init((CREStatic *)((char *)this + 564), v15, v16, (unsigned int)v17);
  v3 = 0;
  v4 = *((_DWORD *)this + 31) <= 0;
  *v5 = -328966;
  *((_DWORD *)this + 142) = -926365496;
  *((_BYTE *)this + 644) = 0;
  if ( !v4 )
  {
    do
    {
      v6 = *((_DWORD *)this + 30);
      if ( *(_DWORD *)(v6 + 4 * v3) )
        operator delete(*(void **)(v6 + 4 * v3));
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 31) );
  }
  if ( *((_DWORD *)this + 30) )
  {
    free(*((void **)this + 30));
    *((_DWORD *)this + 30) = 0;
  }
  v17 = "StaticText";
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 31) = 0;
  std::string::string(v19, v17);
  LOBYTE(v20) = 3;
  std::string::operator=((char *)this + 16, v19);
  LOBYTE(v20) = 2;
  std::string::~string(v19);
  std::wstring::operator=((char *)this + 532, &unk_101C48B0);
  v7 = *(void (__thiscall **)(CREStatic *))(*(_DWORD *)this + 164);
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  v7(this);
  v8 = *(void (__thiscall **)(CREStatic *))(*(_DWORD *)this + 164);
  *((_DWORD *)this + 26) = 20;
  *((_DWORD *)this + 27) = 10;
  v8(this);
  v17 = "Text";
  *((_DWORD *)this + 171) = 14;
  *((_BYTE *)this + 688) = 0;
  std::string::string(v19, v17);
  v17 = 0;
  LOBYTE(v20) = 4;
  std::string::string(&v10, &unk_101C48B4);
  sub_100D37D0((int)this + 532, v19, v10, v11, v12, v13, v14, v15, v16, (int)v17);
  LOBYTE(v20) = 2;
  std::string::~string(v19);
  std::string::string(v19, "NormalFontName");
  v17 = 0;
  LOBYTE(v20) = 5;
  std::string::string(&v10, &unk_101C48C8);
  sub_100D37D0((int)this + 656, v19, v10, v11, v12, v13, v14, v15, v16, (int)v17);
  LOBYTE(v20) = 2;
  std::string::~string(v19);
  std::string::string(v19, "NormalFontSize");
  v17 = 0;
  LOBYTE(v20) = 6;
  std::string::string(&v10, &unk_101C48F0);
  sub_100D35B0((int)this + 684, v19, v10, v11, v12, v13, v14, v15, v16, (int)v17);
  LOBYTE(v20) = 2;
  std::string::~string(v19);
  std::string::string(v19, "NormalFontBold");
  v17 = 0;
  LOBYTE(v20) = 7;
  std::string::string(&v10, &unk_101C4918);
  sub_100D36C0((int)this + 688, v19, v10, v11, v12, v13, v14, v15, v16, (int)v17);
  LOBYTE(v20) = 2;
  std::string::~string(v19);
  std::string::string(v19, "NormalTextColor");
  v17 = 0;
  LOBYTE(v20) = 8;
  std::string::string(&v10, &unk_101C4944);
  sub_100D38E0((int)this + 652, v19, v10, v11, v12, v13, v14, v15, v16, (int)v17);
  LOBYTE(v20) = 2;
  std::string::~string(v19);
  std::string::string(v19, "NormalTextFormat");
  v17 = 0;
  LOBYTE(v20) = 9;
  std::string::string(&v10, &unk_101C4980);
  sub_100D38E0((int)this + 692, v19, v10, v11, v12, v13, v14, v15, v16, (int)v17);
  LOBYTE(v20) = 2;
  std::string::~string(v19);
  return this;
}
