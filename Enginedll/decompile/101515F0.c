/*
 * func-name: ?GetControl@CControlBox@@QAEPAVCREControl@@H@Z
 * func-address: 0x101515f0
 * callers: none
 * callees: none
 */

struct CREControl *__thiscall CControlBox::GetControl(CControlBox *this, int a2)
{
  unsigned int v2; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = 0;
  for ( i = 0; ; i += 12 )
  {
    v5 = *((_DWORD *)this + 134);
    if ( !v5 || v2 >= (*((_DWORD *)this + 135) - v5) / 12 )
      return 0;
    v6 = *((_DWORD *)this + 134);
    if ( !v6 || v2 >= (*((_DWORD *)this + 135) - v6) / 12 )
      invalid_parameter_noinfo();
    v7 = *((_DWORD *)this + 134);
    if ( *(_DWORD *)(*(_DWORD *)(v7 + i) + 136) == a2 )
      break;
    ++v2;
  }
  if ( !v7 || v2 >= (*((_DWORD *)this + 135) - v7) / 12 )
    invalid_parameter_noinfo();
  return *(struct CREControl **)(*((_DWORD *)this + 134) + 12 * v2);
}
