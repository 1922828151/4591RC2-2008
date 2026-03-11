/*
 * func-name: ?FindWindow@GUISystem@@UAEPAVCGUIWindow@@PAVCREDialog@@@Z
 * func-address: 0x100d5de0
 * callers: none
 * callees: none
 */

struct CGUIWindow *__thiscall GUISystem::FindWindow(GUISystem *this, struct CREDialog *a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 5);
    if ( !v4 || i >= (*((_DWORD *)this + 6) - v4) >> 2 )
      return 0;
    v5 = *((_DWORD *)this + 5);
    if ( *(struct CREDialog **)(*(_DWORD *)(v5 + 4 * i) + 4) == a2 )
      break;
  }
  if ( !v5 || i >= (*((_DWORD *)this + 6) - v5) >> 2 )
    invalid_parameter_noinfo();
  return *(struct CGUIWindow **)(*((_DWORD *)this + 5) + 4 * i);
}
