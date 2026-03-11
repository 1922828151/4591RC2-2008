/*
 * func-name: sub_10002B90
 * func-address: 0x10002b90
 * callers: none
 * callees: none
 */

void __thiscall sub_10002B90(Input *this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax

  v2 = *((_DWORD *)this + 1521);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 32))(v2);
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 1521) + 8))(*((_DWORD *)this + 1521));
    *((_DWORD *)this + 1521) = 0;
  }
  v3 = *((_DWORD *)this + 1522);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 32))(*((_DWORD *)this + 1522));
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 1522) + 8))(*((_DWORD *)this + 1522));
    *((_DWORD *)this + 1522) = 0;
  }
  v4 = (_DWORD *)((char *)this + 6092);
  v5 = 4;
  do
  {
    if ( *v4 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v4 + 32))(*v4);
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4);
      *v4 = 0;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = *((_DWORD *)this + 1520);
  if ( v6 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(*((_DWORD *)this + 1520));
    *((_DWORD *)this + 1520) = 0;
  }
  Input::Shutdown(this);
}
