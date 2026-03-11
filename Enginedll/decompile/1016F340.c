/*
 * func-name: ?RemoveEvent@EventAttemper@@QAE_NH@Z
 * func-address: 0x1016f340
 * callers: none
 * callees: 0x1016fbb0, 0x1016fd00
 */

char __thiscall EventAttemper::RemoveEvent(EventAttemper *this, int a2)
{
  int v3; // edi
  void *v4; // ebx
  _DWORD *v5; // esi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  int v8; // [esp+10h] [ebp-8h] BYREF
  void *v9; // [esp+14h] [ebp-4h]

  sub_1016FD00(&v8, &a2);
  v3 = v8;
  v4 = (void *)*((_DWORD *)this + 18);
  if ( !v8 || (EventAttemper *)v8 != (EventAttemper *)((char *)this + 68) )
    invalid_parameter_noinfo();
  v5 = v9;
  if ( v9 == v4 )
    return 0;
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v5 == *(_DWORD **)(v3 + 4) )
    invalid_parameter_noinfo();
  if ( v5[3] )
  {
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    v6 = (void (__thiscall ***)(_DWORD, int))v5[3];
    if ( v6 )
      (**v6)(v6, 1);
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    v5[3] = 0;
  }
  sub_1016FBB0((int)&v8, v3, v5);
  return 1;
}
