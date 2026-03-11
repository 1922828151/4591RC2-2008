/*
 * func-name: ?MoveGroup@CGroupMemberUI@@IAEXAAUMemberControl@1@M@Z_0
 * func-address: 0x10271250
 * callers: 0x1000121c
 * callees: 0x102c9fe0
 */

void __thiscall CGroupMemberUI::MoveGroup(CGroupMemberUI *this, struct CGroupMemberUI::MemberControl *a2, float a3)
{
  unsigned int i; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  float v9; // [esp+4h] [ebp+4h]
  struct CGroupMemberUI::MemberControl *v10; // [esp+4h] [ebp+4h]
  int v11; // [esp+8h] [ebp+8h]

  v9 = a3 + *((float *)a2 + 18);
  if ( v9 > 0.0 )
    v9 = 0.0;
  if ( v9 < -126.0 )
    v9 = -126.0;
  v10 = (struct CGroupMemberUI::MemberControl *)(int)(v9 + 0.5);
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)a2 + 11);
    if ( !v5 || i >= (*((_DWORD *)a2 + 12) - v5) >> 2 )
      break;
    v6 = *((_DWORD *)a2 + 11);
    v11 = *(_DWORD *)(v6 + 4 * i);
    if ( !v6 || i >= (*((_DWORD *)a2 + 12) - v6) >> 2 )
      _invalid_parameter_noinfo();
    v7 = *((_DWORD *)a2 + 15);
    v8 = 4 * i + *((_DWORD *)a2 + 11);
    if ( !v7 || i >= (*((_DWORD *)a2 + 16) - v7) >> 2 )
      _invalid_parameter_noinfo();
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 156))(
      v11,
      (int)v10 + *(_DWORD *)(*((_DWORD *)a2 + 15) + 4 * i),
      *(_DWORD *)(*(_DWORD *)v8 + 100));
  }
  *((float *)a2 + 18) = (float)(int)v10;
}
