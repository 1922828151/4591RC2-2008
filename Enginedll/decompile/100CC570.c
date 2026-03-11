/*
 * func-name: ??0CInputBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cc570
 * callers: 0x1006af00
 * callees: 0x100c7520
 */

CInputBox *__thiscall CInputBox::CInputBox(CInputBox *this, struct CREDialog *a2)
{
  const wchar_t *v3; // eax
  wchar_t v4; // cx

  CREStatic::CREStatic(this, a2);
  v3 = L"-- NONBOUND --";
  *(_DWORD *)this = &CInputBox::`vftable';
  *((_DWORD *)this + 35) = 1;
  *((_DWORD *)this + 28) = a2;
  *((_BYTE *)this + 696) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 175) = -1;
  do
  {
    v4 = *v3;
    *(const wchar_t *)((char *)v3 + (CInputBox *)((char *)this + 704) - (CInputBox *)L"-- NONBOUND --") = *v3;
    ++v3;
  }
  while ( v4 );
  *((float *)this + 306) = 0.0;
  *((_DWORD *)this + 304) = 0;
  return this;
}
