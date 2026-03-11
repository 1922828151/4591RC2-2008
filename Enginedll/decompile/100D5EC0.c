/*
 * func-name: ?WindowOnPoint@GUISystem@@UAEPAVCGUIWindow@@ABUtagPOINT@@@Z
 * func-address: 0x100d5ec0
 * callers: none
 * callees: none
 */

struct CGUIWindow *__thiscall GUISystem::WindowOnPoint(GUISystem *this, const struct tagPOINT *a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  struct CGUIWindow *result; // eax
  _DWORD *v8; // ecx
  LONG v9; // esi
  LONG y; // edx
  LONG v11; // esi

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
    {
      v8 = (_DWORD *)*((_DWORD *)result + 1);
      v9 = v8[173];
      if ( a2->x >= v9 && a2->x <= v9 + v8[175] )
      {
        y = a2->y;
        v11 = v8[174];
        if ( y >= v11 && y <= v11 + v8[176] )
          break;
      }
    }
    if ( (--v5 & 0x80000000) != 0 )
      return 0;
  }
  return result;
}
