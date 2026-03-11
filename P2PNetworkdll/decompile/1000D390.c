/*
 * func-name: sub_1000D390
 * func-address: 0x1000d390
 * callers: 0x1000b300, 0x1000c0c0, 0x1000d950
 * callees: 0x10007680, 0x10023306
 */

_DWORD *__userpurge sub_1000D390@<eax>(_DWORD *a1@<ebx>, _DWORD *a2, int a3, int *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v7; // ecx
  int v8; // esi
  int *v9; // edi
  int v10; // ecx
  unsigned int v11; // edi
  _DWORD *v12; // esi
  int v13; // ecx
  Outpop::Utility::Ref_Object *v14; // ecx
  _DWORD *result; // eax
  unsigned int i; // [esp+Ch] [ebp-20h]
  int v17; // [esp+Ch] [ebp-20h]

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(int **)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = a1[8];
  v5 = v4 & sub_10007680((int)(a4 + 2));
  if ( a1[9] <= v5 )
    v5 += -1 - (v4 >> 1);
  v6 = v5;
  for ( i = v5; ; --i )
  {
    v7 = a1[5];
    if ( !v7 || v6 >= (a1[6] - v7) >> 3 )
      invalid_parameter_noinfo();
    v8 = 8 * v6 + a1[5];
    if ( a3 != *(_DWORD *)v8 )
      invalid_parameter_noinfo();
    v9 = a4;
    if ( a4 != *(int **)(v8 + 4) )
      break;
    v10 = a1[5];
    v11 = i;
    if ( !v10 || i >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v12 = (_DWORD *)(8 * i + a1[5]);
    if ( !*v12 )
      invalid_parameter_noinfo();
    if ( v12[1] == *(_DWORD *)(*v12 + 4) )
      invalid_parameter_noinfo();
    v12[1] = *(_DWORD *)v12[1];
    if ( !i )
    {
      v9 = a4;
      break;
    }
    v6 = v11 - 1;
  }
  if ( v9 == *(int **)(a3 + 4) )
    invalid_parameter_noinfo();
  v13 = *v9;
  v17 = *v9;
  if ( v9 != (int *)a1[2] )
  {
    *(_DWORD *)v9[1] = v13;
    *(_DWORD *)(*v9 + 4) = v9[1];
    v14 = (Outpop::Utility::Ref_Object *)a4[9];
    if ( v14 )
      Outpop::Utility::Ref_Object::release(v14);
    std::string::~string(a4 + 2);
    operator delete(v9);
    v13 = v17;
    --a1[3];
  }
  result = a2;
  *a2 = a3;
  a2[1] = v13;
  return result;
}
