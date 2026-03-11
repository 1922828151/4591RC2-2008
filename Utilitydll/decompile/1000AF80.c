/*
 * func-name: ?process_all_message@Dispatch_Thread_2@Utility@Outpop@@UAEXXZ
 * func-address: 0x1000af80
 * callers: none
 * callees: 0x1000b210, 0x1000b640
 */

void __thiscall Outpop::Utility::Dispatch_Thread_2::process_all_message(Outpop::Utility::Dispatch_Thread_2 *this)
{
  unsigned int v2; // ebx
  _DWORD *v3; // esi
  unsigned int v4; // ebp
  struct _RTL_CRITICAL_SECTION *v5; // ebp
  unsigned int v6; // ebx
  char *v7; // edi
  bool v8; // cc
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // ebx
  unsigned int v14; // [esp+18h] [ebp-24h]
  int v15[3]; // [esp+1Ch] [ebp-20h] BYREF
  int v16; // [esp+28h] [ebp-14h]
  int v17; // [esp+38h] [ebp-4h]

  v2 = *((_DWORD *)this + 47);
  v3 = (_DWORD *)((char *)this + 180);
  if ( *((_DWORD *)this + 46) > v2 )
    invalid_parameter_noinfo();
  v4 = v3[1];
  if ( v4 > v3[2] )
    invalid_parameter_noinfo();
  sub_1000B210(v3, v15, v3, v4, v3, v2);
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  v15[2] = (int)this + 88;
  v16 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v16 = 0;
  v17 = 0;
  v6 = *((_DWORD *)this + 43);
  v7 = (char *)this + 164;
  if ( *((_DWORD *)v7 + 1) > v6 )
    invalid_parameter_noinfo();
  v8 = *((_DWORD *)v7 + 1) <= *((_DWORD *)v7 + 2);
  v15[0] = *((_DWORD *)v7 + 1);
  if ( !v8 )
    invalid_parameter_noinfo();
  v9 = v3[1];
  v14 = v9;
  if ( v9 > v3[2] )
  {
    invalid_parameter_noinfo();
    v9 = v14;
  }
  sub_1000B640(v3, v15[0], (int)v3, v9, (int)v7, v15[0], (int)v7, v6);
  v10 = *((_DWORD *)v7 + 2);
  if ( *((_DWORD *)v7 + 1) > v10 )
    invalid_parameter_noinfo();
  v11 = *((_DWORD *)v7 + 1);
  v8 = v11 <= *((_DWORD *)v7 + 2);
  v15[0] = v11;
  if ( !v8 )
  {
    invalid_parameter_noinfo();
    v11 = v15[0];
  }
  sub_1000B210(v7, v15, v7, v11, v7, v10);
  v17 = -1;
  v16 = -1;
  LeaveCriticalSection(v5);
  v12 = (_DWORD *)v3[1];
  if ( (unsigned int)v12 > v3[2] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v13 = (_DWORD *)v3[2];
    if ( v3[1] > (unsigned int)v13 )
      invalid_parameter_noinfo();
    if ( v12 == v13 )
      break;
    if ( (unsigned int)v12 >= v3[2] )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v12 + 4))(*v12);
    if ( (unsigned int)v12 >= v3[2] )
      invalid_parameter_noinfo();
    ++v12;
  }
}
