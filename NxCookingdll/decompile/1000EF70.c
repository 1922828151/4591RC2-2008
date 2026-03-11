/*
 * func-name: sub_1000EF70
 * func-address: 0x1000ef70
 * callers: 0x1000f360
 * callees: none
 */

_DWORD *__usercall sub_1000EF70@<eax>(
        _DWORD *result@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        unsigned int a4@<edi>,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  _DWORD *v7; // esi

  v7 = (_DWORD *)(a7 + 12 * a2);
  *v7 = -1;
  v7[1] = -1;
  v7[2] = -1;
  if ( a4 >= a5 )
  {
    *(_DWORD *)(a3 + 12 * *result) = a5;
    *(_DWORD *)(a3 + 12 * *result + 4) = a4;
  }
  else
  {
    *(_DWORD *)(a3 + 12 * *result) = a4;
    *(_DWORD *)(a3 + 12 * *result + 4) = a5;
  }
  *(_DWORD *)(a3 + 12 * (*result)++ + 8) = a2;
  if ( a4 >= a6 )
  {
    *(_DWORD *)(a3 + 12 * *result) = a6;
    *(_DWORD *)(a3 + 12 * *result + 4) = a4;
  }
  else
  {
    *(_DWORD *)(a3 + 12 * *result) = a4;
    *(_DWORD *)(a3 + 12 * *result + 4) = a6;
  }
  *(_DWORD *)(a3 + 12 * (*result)++ + 8) = a2;
  if ( a5 >= a6 )
  {
    *(_DWORD *)(a3 + 12 * *result) = a6;
    *(_DWORD *)(a3 + 12 * *result + 4) = a5;
  }
  else
  {
    *(_DWORD *)(a3 + 12 * *result) = a5;
    *(_DWORD *)(a3 + 12 * *result + 4) = a6;
  }
  *(_DWORD *)(a3 + 12 * (*result)++ + 8) = a2;
  return result;
}
