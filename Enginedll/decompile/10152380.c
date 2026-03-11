/*
 * func-name: ?GetControlBox@CControlBoxList@@QAEPAVCControlBox@@H@Z
 * func-address: 0x10152380
 * callers: none
 * callees: none
 */

struct CControlBox *__thiscall CControlBoxList::GetControlBox(CControlBoxList *this, int a2)
{
  int v3; // ecx

  if ( a2 >= 0 && (v3 = *((_DWORD *)this + 134)) != 0 && a2 < (unsigned int)((*((_DWORD *)this + 135) - v3) >> 2) )
    return *(struct CControlBox **)(*((_DWORD *)this + 134) + 4 * a2);
  else
    return 0;
}
