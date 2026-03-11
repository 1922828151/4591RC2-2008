/*
 * func-name: sub_10148AC0
 * func-address: 0x10148ac0
 * callers: 0x1000bd7a
 * callees: 0x10007d8d
 */

int __thiscall sub_10148AC0(int this, char a2)
{
  Engine *v3; // eax
  double AbsTimeDiff; // st7
  int result; // eax
  int v6; // esi
  void *v7; // edi
  void *v8; // ebx
  int v9; // [esp+4h] [ebp-8h] BYREF

  *(_BYTE *)(this + 112) = a2;
  if ( a2 )
  {
    v3 = (Engine *)Engine::Instance();
    AbsTimeDiff = Engine::GetAbsTimeDiff(v3);
    result = GSeconds;
    *(double *)(this + 152) = AbsTimeDiff + *(float *)&GSeconds;
  }
  else
  {
    v6 = this + 116;
    v7 = *(void **)(this + 124);
    if ( *(_DWORD *)(this + 120) > (unsigned int)v7 )
      _invalid_parameter_noinfo();
    v8 = *(void **)(v6 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(v6 + 8) )
      _invalid_parameter_noinfo();
    return sub_10007D8D((int)&v9, v6, v8, v6, v7);
  }
  return result;
}
