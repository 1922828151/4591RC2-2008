/*
 * func-name: sub_100082A0
 * func-address: 0x100082a0
 * callers: 0x10007760
 * callees: 0x10007680, 0x10023306
 */

_DWORD *__userpurge sub_100082A0@<eax>(_DWORD *a1@<ebx>, _DWORD *a2, int a3, char *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int i; // edi
  int v7; // ecx
  int v8; // esi
  char *v9; // edx
  int v10; // ecx
  _DWORD *v11; // esi
  _DWORD *v12; // edi
  char *v13; // esi
  Outpop::Utility::Ref_Object *v14; // ecx
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(char **)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = a1[8];
  v5 = v4 & sub_10007680((int)(a4 + 8));
  if ( a1[9] <= v5 )
    v5 += -1 - (v4 >> 1);
  for ( i = v5; ; --i )
  {
    v7 = a1[5];
    if ( !v7 || i >= (a1[6] - v7) >> 3 )
      invalid_parameter_noinfo();
    v8 = 8 * i + a1[5];
    if ( a3 != *(_DWORD *)v8 )
      invalid_parameter_noinfo();
    v9 = a4;
    if ( a4 != *(char **)(v8 + 4) )
      break;
    v10 = a1[5];
    if ( !v10 || i >= (a1[6] - v10) >> 3 )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    v11 = (_DWORD *)(8 * i + a1[5]);
    if ( !*v11 )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    if ( v11[1] == *(_DWORD *)(*v11 + 4) )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    v11[1] = *(_DWORD *)v11[1];
    if ( !i )
      break;
  }
  if ( v9 == *(char **)(a3 + 4) )
  {
    invalid_parameter_noinfo();
    v9 = a4;
  }
  v12 = *(_DWORD **)v9;
  if ( v9 != (char *)a1[2] )
  {
    **((_DWORD **)v9 + 1) = v12;
    v13 = v9 + 8;
    *(_DWORD *)(*(_DWORD *)v9 + 4) = *((_DWORD *)v9 + 1);
    v14 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v9 + 9);
    if ( v14 )
      Outpop::Utility::Ref_Object::release(v14);
    std::string::~string(v13);
    operator delete(a4);
    --a1[3];
  }
  result = a2;
  *a2 = a3;
  a2[1] = v12;
  return result;
}
