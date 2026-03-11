/*
 * func-name: ?push_back@?$vector@PAUModelFrame@@V?$allocator@PAUModelFrame@@@std@@@std@@QAEXABQAUModelFrame@@@Z
 * func-address: 0x1002eac0
 * callers: 0x1009ee50, 0x1009eed0
 * callees: 0x1002ad40
 */

_DWORD *__thiscall std::vector<ModelFrame *>::push_back(_DWORD *this, int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int *v5; // eax
  _DWORD *result; // eax
  char *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    v5 = (int *)this[2];
    *v5 = *a2;
    result = v5 + 1;
    this[2] = result;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return std::vector<ModelFrame *>::insert(this, &v8, this, v7, a2);
  }
  return result;
}
