/*
 * func-name: ?GetEvent@EventAttemper@@QAEPAVEvent@@H@Z
 * func-address: 0x1016f3e0
 * callers: none
 * callees: 0x1016fd00
 */

struct Event *__thiscall EventAttemper::GetEvent(EventAttemper *this, int a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // esi
  int v6; // ebx
  char *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_1016FD00(&v8, &a2);
  v3 = *((_DWORD *)this + 18);
  v4 = (char *)this + 68;
  v5 = v8;
  if ( !v8 || v8 != v4 )
    invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v3 )
    return 0;
  if ( !v5 )
    invalid_parameter_noinfo();
  if ( v6 == *((_DWORD *)v5 + 1) )
    invalid_parameter_noinfo();
  return *(struct Event **)(v6 + 12);
}
