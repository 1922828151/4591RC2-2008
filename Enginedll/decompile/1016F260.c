/*
 * func-name: ?RemoveObserver@EventAttemper@@QAE_NH_N@Z
 * func-address: 0x1016f260
 * callers: none
 * callees: 0x1001c7f0, 0x100f5b70, 0x1016fbb0, 0x1016fd00
 */

char __thiscall EventAttemper::RemoveObserver(EventAttemper *this, int a2, bool a3)
{
  void *v4; // edi
  int v5; // edi
  _DWORD *v6; // ebx
  void *v8; // ebx
  char *v9; // eax
  int v10; // esi
  int v11; // [esp+Ch] [ebp-8h] BYREF
  void *v12; // [esp+10h] [ebp-4h]

  if ( a3 )
  {
    sub_1016FD00(&v11, &a2);
    v4 = (void *)*((_DWORD *)this + 4);
    if ( !v11 || (EventAttemper *)v11 != (EventAttemper *)((char *)this + 12) )
      invalid_parameter_noinfo();
    if ( v12 != v4 )
    {
      v5 = *((_DWORD *)this + 41);
      v6 = sub_100F5B70(v5, *(_DWORD *)(v5 + 4), &a2);
      sub_1001C7F0((_DWORD *)this + 40, 1u);
      *(_DWORD *)(v5 + 4) = v6;
      *(_DWORD *)v6[1] = v6;
      return 1;
    }
  }
  else
  {
    sub_1016FD00(&v11, &a2);
    v8 = (void *)*((_DWORD *)this + 4);
    v9 = (char *)this + 12;
    v10 = v11;
    if ( !v11 || (char *)v11 != v9 )
      invalid_parameter_noinfo();
    if ( v12 != v8 )
    {
      sub_1016FBB0((int)&v11, v10, v12);
      return 1;
    }
  }
  return 0;
}
