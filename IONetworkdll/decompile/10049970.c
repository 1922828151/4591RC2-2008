/*
 * func-name: sub_10049970
 * func-address: 0x10049970
 * callers: 0x100328d0, 0x10046860
 * callees: 0x1004e870
 */

_DWORD *__userpurge sub_10049970@<eax>(_DWORD *a1@<esi>, _DWORD *a2, int a3, int a4)
{
  ldiv_t v4; // rax
  unsigned int v5; // eax
  unsigned int i; // ebx
  int v7; // ecx
  _DWORD *v8; // edi
  int *v9; // edx
  int v10; // ecx
  _DWORD *v11; // edi
  int v12; // ebx
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD *)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = ldiv(*(unsigned __int16 *)(a4 + 8) ^ 0xDEADBEEF, 127773);
  v5 = (16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0)) & a1[8];
  if ( a1[9] <= v5 )
    v5 += -1 - (a1[8] >> 1);
  for ( i = v5; ; --i )
  {
    v7 = a1[5];
    if ( !v7 || i >= (a1[6] - v7) >> 3 )
      invalid_parameter_noinfo();
    v8 = (_DWORD *)(8 * i + a1[5]);
    if ( a3 != *v8 )
      invalid_parameter_noinfo();
    v9 = (int *)a4;
    if ( a4 != v8[1] )
      break;
    v10 = a1[5];
    if ( !v10 || i >= (a1[6] - v10) >> 3 )
    {
      invalid_parameter_noinfo();
      v9 = (int *)a4;
    }
    v11 = (_DWORD *)(8 * i + a1[5]);
    if ( !*v11 )
    {
      invalid_parameter_noinfo();
      v9 = (int *)a4;
    }
    if ( v11[1] == *(_DWORD *)(*v11 + 4) )
    {
      invalid_parameter_noinfo();
      v9 = (int *)a4;
    }
    v11[1] = *(_DWORD *)v11[1];
    if ( !i )
      break;
  }
  if ( v9 == *(int **)(a3 + 4) )
  {
    invalid_parameter_noinfo();
    v9 = (int *)a4;
  }
  v12 = *v9;
  if ( v9 != (int *)a1[2] )
  {
    *(_DWORD *)v9[1] = v12;
    *(_DWORD *)(*v9 + 4) = v9[1];
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(v9 + 3));
    operator delete(a4);
    --a1[3];
  }
  result = a2;
  *a2 = a3;
  a2[1] = v12;
  return result;
}
