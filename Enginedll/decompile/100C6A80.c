/*
 * func-name: ?SetHoverPicTypeEnabled@CHotZonePic@@QAEXH_N@Z
 * func-address: 0x100c6a80
 * callers: none
 * callees: 0x1001e9c0, 0x1005b1f0
 */

void __thiscall CHotZonePic::SetHoverPicTypeEnabled(CHotZonePic *this, int a2, bool a3)
{
  char *v3; // ebx
  void (__cdecl *v4)(); // ebp
  _DWORD *v5; // edi
  char *v6; // esi
  char *v7; // ebx
  int v8[2]; // [esp+10h] [ebp-8h] BYREF

  v3 = (char *)*((_DWORD *)this + 146);
  v4 = invalid_parameter_noinfo;
  v5 = (_DWORD *)((char *)this + 576);
  if ( *((_DWORD *)this + 145) > (unsigned int)v3 )
    invalid_parameter_noinfo();
  v6 = (char *)v5[1];
  if ( (unsigned int)v6 > v5[2] )
    invalid_parameter_noinfo();
  for ( v8[1] = (int)v6; v6 != v3; v6 += 4 )
  {
    if ( *(_DWORD *)v6 == a2 )
      break;
  }
  v7 = (char *)v5[2];
  if ( v5[1] > (unsigned int)v7 )
  {
    invalid_parameter_noinfo();
    v4 = invalid_parameter_noinfo;
  }
  if ( !v5 )
    v4();
  if ( v6 == v7 )
  {
    if ( a3 )
      sub_1005B1F0(v5, &a2);
  }
  else if ( !a3 )
  {
    std::vector<Model *>::erase(v5, v8, (int)v5, v6);
  }
}
