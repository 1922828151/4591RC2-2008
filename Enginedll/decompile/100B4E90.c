/*
 * func-name: ?RemoveHotZone@CHotZonePic@@QAE_NH@Z
 * func-address: 0x100b4e90
 * callers: none
 * callees: 0x1001e9c0, 0x101a2500
 */

char __thiscall CHotZonePic::RemoveHotZone(CHotZonePic *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // ecx
  void **v4; // edi
  unsigned int v5; // edi
  char *v6; // edi
  int v8[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a2 < 0 )
    return 0;
  v2 = (_DWORD *)((char *)this + 544);
  v3 = *((_DWORD *)this + 137);
  if ( !v3 || a2 >= (unsigned int)((v2[2] - v3) >> 2) )
    return 0;
  v4 = *(void ***)(v2[1] + 4 * a2);
  if ( v4 )
  {
    if ( v4[8] )
      operator delete(v4[8]);
    operator delete(v4);
  }
  v5 = v2[1];
  if ( v5 > v2[2] )
    invalid_parameter_noinfo();
  v8[1] = v5;
  v6 = (char *)(v5 + 4 * a2);
  if ( (unsigned int)v6 > v2[2] || (unsigned int)v6 < v2[1] )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase(v2, v8, (int)v2, v6);
  return 1;
}
