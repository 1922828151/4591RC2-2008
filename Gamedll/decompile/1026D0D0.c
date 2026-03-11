/*
 * func-name: ??0CDropBagUI@@QAE@XZ_0
 * func-address: 0x1026d0d0
 * callers: 0x1000f4d9
 * callees: 0x10007c7f, 0x1000b997, 0x10016b0d
 */

CDropBagUI *__thiscall CDropBagUI::CDropBagUI(CDropBagUI *this)
{
  char v3; // [esp+13h] [ebp-11h] BYREF
  CDropBagUI *v4; // [esp+14h] [ebp-10h]
  int v5; // [esp+20h] [ebp-4h]

  v4 = this;
  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CDropBagUI::`vftable';
  v5 = 0;
  *((_DWORD *)this + 972) = 0;
  *((_DWORD *)this + 973) = 0;
  *((_DWORD *)this + 974) = 0;
  *((_DWORD *)this + 976) = 0;
  *((_DWORD *)this + 977) = 0;
  *((_DWORD *)this + 978) = 0;
  *((_DWORD *)this + 980) = 0;
  *((_DWORD *)this + 981) = 0;
  *((_DWORD *)this + 982) = 0;
  *((_DWORD *)this + 984) = 0;
  *((_DWORD *)this + 985) = 0;
  *((_DWORD *)this + 986) = 0;
  *((_DWORD *)this + 998) = 0;
  *((_DWORD *)this + 999) = 0;
  *((_DWORD *)this + 1000) = 0;
  *((_DWORD *)this + 1002) = 0;
  *((_DWORD *)this + 1003) = 0;
  *((_DWORD *)this + 1004) = 0;
  LOBYTE(v5) = 6;
  sub_1000B997((int)&v3, (int)&v3);
  LOBYTE(v5) = 7;
  *((_DWORD *)this + 1015) = -1;
  *((_DWORD *)this + 22) = 27;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CDropBagUI::Initialize(this);
  CDropBagUI::InitComponent(this);
  return this;
}
