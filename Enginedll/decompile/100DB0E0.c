/*
 * func-name: ?ControlDown@Input@@QAE_NHH@Z
 * func-address: 0x100db0e0
 * callers: 0x1007fb70, 0x10080c60, 0x10088cd0, 0x1008c3e0, 0x1008ce00, 0x10094190, 0x100b27b0, 0x10164f30, 0x10169700, 0x10169d00
 * callees: none
 */

bool __thiscall Input::ControlDown(Input *this, int a2, int a3)
{
  int v5; // ebx
  int v6; // esi
  int *v7; // ebp
  int v8; // eax
  char v9; // al

  if ( a2 == -1 || !*((_DWORD *)this + a2 + 430) )
    return 0;
  v5 = a3;
  v6 = 0;
  v7 = (int *)((char *)this + 8 * a2 + 112);
  do
  {
    v8 = *v7;
    if ( *v7 == -1 )
    {
      *((_BYTE *)&a2 + v6) = 0;
    }
    else
    {
      if ( v8 < 400 || v8 > 403 )
      {
        if ( v8 < 40000 || v8 > 40011 )
          v9 = (*(int (__thiscall **)(Input *, int))(*(_DWORD *)this + 40))(this, *v7);
        else
          v9 = (*(int (__thiscall **)(Input *, int, int))(*(_DWORD *)this + 60))(this, v5, *v7);
      }
      else
      {
        v9 = (*(int (__thiscall **)(Input *, int))(*(_DWORD *)this + 44))(this, *v7);
      }
      *((_BYTE *)&a2 + v6) = v9;
    }
    ++v6;
    ++v7;
  }
  while ( v6 < 2 );
  return (_WORD)a2 != 0;
}
