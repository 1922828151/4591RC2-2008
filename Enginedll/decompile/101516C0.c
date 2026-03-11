/*
 * func-name: ?GetControlByIndex@CControlBox@@QAEPAVCREControl@@H@Z
 * func-address: 0x101516c0
 * callers: none
 * callees: none
 */

struct CREControl *__thiscall CControlBox::GetControlByIndex(CControlBox *this, unsigned int a2)
{
  int v3; // eax
  int v5; // eax

  v3 = *((_DWORD *)this + 134);
  if ( !v3 || a2 >= (*((_DWORD *)this + 135) - v3) / 12 )
    return 0;
  v5 = *((_DWORD *)this + 134);
  if ( !v5 || a2 >= (*((_DWORD *)this + 135) - v5) / 12 )
    invalid_parameter_noinfo();
  return *(struct CREControl **)(*((_DWORD *)this + 134) + 12 * a2);
}
