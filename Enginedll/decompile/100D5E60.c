/*
 * func-name: ?GetTopWindow@GUISystem@@UAEPAVCGUIWindow@@_N@Z
 * func-address: 0x100d5e60
 * callers: none
 * callees: none
 */

struct CGUIWindow *__thiscall GUISystem::GetTopWindow(GUISystem *this, bool a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // edi
  int v6; // ecx
  struct CGUIWindow *result; // eax

  v3 = *((_DWORD *)this + 5);
  if ( v3 )
    v4 = (*((_DWORD *)this + 6) - v3) >> 2;
  else
    v4 = 0;
  v5 = v4 - 1;
  if ( v4 - 1 < 0 )
    return 0;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 5);
    if ( !v6 || v5 >= (*((_DWORD *)this + 6) - v6) >> 2 )
      invalid_parameter_noinfo();
    result = *(struct CGUIWindow **)(*((_DWORD *)this + 5) + 4 * v5);
    if ( *(_BYTE *)result )
      break;
    if ( (--v5 & 0x80000000) != 0 )
      return 0;
  }
  return result;
}
