/*
 * func-name: sub_10035BA0
 * func-address: 0x10035ba0
 * callers: 0x10033240, 0x10047130
 * callees: 0x100356a0, 0x10035c80, 0x10035dd0
 */

int __userpurge sub_10035BA0@<eax>(_DWORD *a1@<edi>, int a2)
{
  int v2; // ebp
  char *v3; // ebx
  char *v4; // esi
  int v5; // eax
  char *v6; // ebp
  unsigned int i; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  _WORD *v10; // eax
  void *v11; // esi
  unsigned int v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h] BYREF

  v2 = a2;
  sub_10035DD0(&v13);
  v3 = (char *)a1[2];
  if ( a1[1] > (unsigned int)v3 )
    invalid_parameter_noinfo();
  v4 = (char *)a1[1];
  if ( (unsigned int)v4 > a1[2] )
    invalid_parameter_noinfo();
  if ( v4 != v3 )
  {
    v5 = (a1[2] - (int)v3) >> 1;
    v6 = &v4[2 * v5];
    if ( v5 > 0 )
      memmove_s(v4, 2 * v5, v3, 2 * v5);
    a1[2] = v6;
    v2 = a2;
  }
  for ( i = 0; i < v13; ++i )
  {
    sub_10035C80(&a2);
    v8 = a1[1];
    if ( v8 )
      v9 = (int)(a1[2] - v8) >> 1;
    else
      v9 = 0;
    if ( v8 && v9 < (int)(a1[3] - v8) >> 1 )
    {
      v10 = (_WORD *)a1[2];
      *v10 = a2;
      a1[2] = v10 + 1;
    }
    else
    {
      v11 = (void *)a1[2];
      if ( v8 > (unsigned int)v11 )
        invalid_parameter_noinfo();
      sub_100356A0((int)a1, &v14, (int)&a2, (int)a1, v11);
    }
  }
  return v2;
}
