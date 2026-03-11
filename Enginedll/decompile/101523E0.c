/*
 * func-name: ?GetControlBoxByData@CControlBoxList@@QAEPAVCControlBox@@K@Z
 * func-address: 0x101523e0
 * callers: none
 * callees: none
 */

struct CControlBox *__thiscall CControlBoxList::GetControlBoxByData(CControlBoxList *this, unsigned int a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 134);
    if ( !v4 || i >= (*((_DWORD *)this + 135) - v4) >> 2 )
      return 0;
    v5 = *((_DWORD *)this + 134);
    if ( *(_DWORD *)(*(_DWORD *)(v5 + 4 * i) + 552) == a2 )
      break;
  }
  if ( !v5 || i >= (*((_DWORD *)this + 135) - v5) >> 2 )
    invalid_parameter_noinfo();
  return *(struct CControlBox **)(*((_DWORD *)this + 134) + 4 * i);
}
