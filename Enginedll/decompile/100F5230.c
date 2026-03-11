/*
 * func-name: ?UnRegist@AnimationSet@@SA_NPAV1@@Z
 * func-address: 0x100f5230
 * callers: none
 * callees: 0x100f8170, 0x1010f500, 0x1010fd40
 */

char __cdecl AnimationSet::UnRegist(struct AnimationSet *a1)
{
  int v1; // ebx
  void *v2; // esi
  void (__cdecl *v3)(); // edi
  void *v4; // ebp
  struct AnimationSet **v5; // edi
  int v6; // ebx
  int v8; // [esp+10h] [ebp-8h] BYREF
  void *v9; // [esp+14h] [ebp-4h]

  sub_1010FD40(&v8, (char *)a1 + 4);
  v1 = v8;
  v2 = dword_11240DB8;
  if ( v8 && (_UNKNOWN *)v8 == &unk_11240DB4 )
  {
    v3 = invalid_parameter_noinfo;
  }
  else
  {
    v3 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
  }
  v4 = v9;
  if ( v9 != v2 )
  {
    if ( !v1 )
      v3();
    if ( v4 == *(void **)(v1 + 4) )
      v3();
    v5 = (struct AnimationSet **)**((_DWORD **)v4 + 10);
    while ( 1 )
    {
      if ( v4 == *(void **)(v1 + 4) )
        invalid_parameter_noinfo();
      if ( v5 == *((struct AnimationSet ***)v4 + 10) )
        break;
      if ( v5[2] == a1 )
      {
        v6 = v8;
        if ( v4 == *(void **)(v8 + 4) )
          invalid_parameter_noinfo();
        sub_1010F500((int)&v8, (int)v4 + 36, v5);
        if ( v4 == *(void **)(v6 + 4) )
          invalid_parameter_noinfo();
        if ( !*((_DWORD *)v4 + 11) )
          sub_100F8170((int)&v8, v6, v4);
        return 1;
      }
      if ( v5 == *((struct AnimationSet ***)v4 + 10) )
        invalid_parameter_noinfo();
      v5 = (struct AnimationSet **)*v5;
      v1 = v8;
    }
  }
  return 0;
}
