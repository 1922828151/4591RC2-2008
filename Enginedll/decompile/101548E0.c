/*
 * func-name: ?MsgProc@CTYMenu@@UAE_NPAUHWND__@@IIJ@Z
 * func-address: 0x101548e0
 * callers: none
 * callees: 0x100d5bd0, 0x100d6d20
 */

char __thiscall CTYMenu::MsgProc(CTYMenu *this, HWND a2, unsigned int a3, unsigned int a4, int a5)
{
  GUISystem *v6; // eax
  unsigned int j; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // ecx
  GUISystem *v14; // eax
  unsigned int i; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // [esp-8h] [ebp-40h]
  int v21; // [esp-4h] [ebp-3Ch]
  POINT pt; // [esp+10h] [ebp-28h] BYREF
  struct tagRECT rc; // [esp+18h] [ebp-20h] BYREF
  RECT v24; // [esp+28h] [ebp-10h] BYREF

  if ( a3 == 512 )
  {
    v12 = *((_DWORD *)this + 174);
    v13 = *((_DWORD *)this + 173);
    v21 = v12 + *((_DWORD *)this + 977);
    v20 = v13 + *((_DWORD *)this + 175);
    *((_DWORD *)this + 975) = -1;
    SetRect(&rc, v13, v12, v20, v21);
    v14 = GUISystem::Instance();
    GUISystem::GetLogicMousePos(v14, &pt);
    SetRect(
      &v24,
      *((_DWORD *)this + 173),
      *((_DWORD *)this + 174),
      *((_DWORD *)this + 173) + *((_DWORD *)this + 175),
      *((_DWORD *)this + 174) + *((_DWORD *)this + 176));
    if ( !PtInRect(&v24, pt) )
      return 0;
    for ( i = 0; ; ++i )
    {
      v16 = *((_DWORD *)this + 969);
      if ( !v16 || i >= (*((_DWORD *)this + 970) - v16) / 36 )
        break;
      if ( PtInRect(&rc, pt) )
      {
        v18 = *((_DWORD *)this + 969);
        if ( !v18 || i >= (*((_DWORD *)this + 970) - v18) / 36 )
          invalid_parameter_noinfo();
        *((_DWORD *)this + 975) = *(_DWORD *)(*((_DWORD *)this + 969) + 36 * i);
        return 0;
      }
      v17 = *((_DWORD *)this + 977);
      rc.top += v17;
      rc.bottom += v17;
    }
  }
  else if ( a3 == 513 )
  {
    SetRect(
      &rc,
      *((_DWORD *)this + 173),
      *((_DWORD *)this + 174),
      *((_DWORD *)this + 173) + *((_DWORD *)this + 175),
      *((_DWORD *)this + 174) + *((_DWORD *)this + 977));
    v6 = GUISystem::Instance();
    GUISystem::GetLogicMousePos(v6, &pt);
    for ( j = 0; ; ++j )
    {
      v8 = *((_DWORD *)this + 969);
      if ( !v8 || j >= (*((_DWORD *)this + 970) - v8) / 36 )
        break;
      if ( PtInRect(&rc, pt) )
      {
        if ( *((_DWORD *)this + 980) )
        {
          v10 = *((_DWORD *)this + 969);
          if ( !v10 || j >= (*((_DWORD *)this + 970) - v10) / 36 )
            invalid_parameter_noinfo();
          (*(void (__thiscall **)(_DWORD, CTYMenu *, _DWORD))(**((_DWORD **)this + 980) + 4))(
            *((_DWORD *)this + 980),
            this,
            *(_DWORD *)(*((_DWORD *)this + 969) + 36 * j));
        }
        return 0;
      }
      v9 = *((_DWORD *)this + 977);
      rc.top += v9;
      rc.bottom += v9;
    }
  }
  v19 = *((_DWORD *)this + 979);
  if ( v19 )
    return (*(int (__thiscall **)(int, HWND, unsigned int, unsigned int, int))(*(_DWORD *)v19 + 8))(v19, a2, a3, a4, a5);
  else
    return 1;
}
