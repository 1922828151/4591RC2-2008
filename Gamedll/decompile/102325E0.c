/*
 * func-name: sub_102325E0
 * func-address: 0x102325e0
 * callers: 0x1000f4c5
 * callees: none
 */

unsigned int __thiscall sub_102325E0(_DWORD *this)
{
  unsigned int v1; // edi
  int i; // ebx
  unsigned int result; // eax
  int v5; // eax
  void *v6; // eax
  _DWORD v7[14]; // [esp-24h] [ebp-38h] BYREF

  v1 = 0;
  for ( i = 0; ; i += 28 )
  {
    result = this[135];
    if ( !result )
      break;
    result = (int)(this[136] - result) / 28;
    if ( v1 >= result )
      break;
    v5 = this[135];
    v7[8] = 1;
    v7[7] = 0;
    if ( !v5 || v1 >= (this[136] - v5) / 28 )
      _invalid_parameter_noinfo();
    v6 = (void *)(i + this[135]);
    v7[13] = v7;
    std::string::string(v7, v6);
    Precacher::CacheActorGroup();
    ++v1;
  }
  return result;
}
