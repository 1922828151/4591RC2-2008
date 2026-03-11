/*
 * func-name: ??0CPasswordEB@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c8c60
 * callers: 0x1006b370, 0x100d87a0, 0x1014a750
 * callees: 0x100c84a0, 0x101a24ac
 */

CPasswordEB *__thiscall CPasswordEB::CPasswordEB(CPasswordEB *this, struct CREDialog *a2)
{
  _WORD *v3; // eax
  _BYTE v5[28]; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+34h] [ebp-4h]

  CREEditBox::CREEditBox(this, a2);
  v6 = 0;
  *(_DWORD *)this = &CPasswordEB::`vftable';
  v3 = operator new(2u);
  *((_DWORD *)this + 198) = v3;
  *v3 = 0;
  *((_DWORD *)this + 199) = 1;
  *((_DWORD *)this + 200) = 0;
  *((_BYTE *)this + 808) = 1;
  *((_DWORD *)this + 203) = 0;
  *((_DWORD *)this + 201) = 0;
  LOBYTE(v6) = 1;
  *((_BYTE *)this + 816) = 1;
  std::string::string(v5, "PasswordEditBox");
  LOBYTE(v6) = 2;
  std::string::operator=((char *)this + 16, v5);
  LOBYTE(v6) = 1;
  std::string::~string(v5);
  return this;
}
