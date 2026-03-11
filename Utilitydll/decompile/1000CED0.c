/*
 * func-name: ?wait@Task@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000ced0
 * callers: 0x10016f90
 * callees: 0x10007c50, 0x10018cf2
 */

int __thiscall Outpop::Utility::Task::wait(Outpop::Utility::Task *this)
{
  int **v1; // esi
  int *i; // edi
  int *j; // edi
  _DWORD **v4; // ecx
  _DWORD *v5; // eax
  bool v6; // zf
  _DWORD *v7; // edi
  int v8; // eax
  char *v9; // esi
  bool v10; // cc
  char *v11; // ebx
  char *v12; // ecx
  char *v13; // eax
  int v14; // edx
  _DWORD *v15; // esi
  int v18[2]; // [esp+18h] [ebp-8h] BYREF

  v1 = (int **)((char *)this + 16);
  for ( i = (int *)**((_DWORD **)this + 5); i != v1[1]; i = (int *)*i )
  {
    WaitForSingleObject((HANDLE)i[3], 0xFFFFFFFF);
    if ( i == v1[1] )
      invalid_parameter_noinfo();
  }
  for ( j = (int *)*v1[1]; j != v1[1]; j = (int *)*j )
  {
    CloseHandle((HANDLE)j[3]);
    if ( j == v1[1] )
      invalid_parameter_noinfo();
  }
  v4 = (_DWORD **)*((_DWORD *)this + 5);
  v5 = *v4;
  *v4 = v4;
  *(_DWORD *)(*((_DWORD *)this + 5) + 4) = *((_DWORD *)this + 5);
  v6 = v5 == *((_DWORD **)this + 5);
  *((_DWORD *)this + 6) = 0;
  if ( !v6 )
  {
    do
    {
      v7 = (_DWORD *)*v5;
      operator delete(v5);
      v5 = v7;
    }
    while ( v7 != *((_DWORD **)this + 5) );
  }
  v8 = *((_DWORD *)this + 5);
  v18[0] = (int)this + 16;
  v9 = (char *)*((_DWORD *)this + 9);
  v10 = *((_DWORD *)this + 8) <= (unsigned int)v9;
  v18[1] = v8;
  if ( !v10 )
    invalid_parameter_noinfo();
  v11 = (char *)*((_DWORD *)this + 8);
  if ( (unsigned int)v11 > *((_DWORD *)this + 9) )
    invalid_parameter_noinfo();
  if ( v11 != v9 )
  {
    v12 = (char *)*((_DWORD *)this + 9);
    v13 = v9;
    if ( v9 != v12 )
    {
      v14 = v11 - v9;
      do
      {
        *(_DWORD *)&v13[v14] = *(_DWORD *)v13;
        *(_DWORD *)&v13[v14 + 4] = *((_DWORD *)v13 + 1);
        v13 += 8;
      }
      while ( v13 != v12 );
    }
    *((_DWORD *)this + 9) = &v11[8 * ((v12 - v9) >> 3)];
  }
  v15 = (_DWORD *)*((_DWORD *)this + 8);
  if ( (unsigned int)v15 > *((_DWORD *)this + 9) )
    invalid_parameter_noinfo();
  sub_10007C50(9u, (int)this + 28, v18, (int)this + 28, v15);
  *((_DWORD *)this + 11) = 1;
  *((_DWORD *)this + 12) = 1;
  return 0;
}
