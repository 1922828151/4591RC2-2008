/*
 * func-name: ?SetGameVisualization@NxPhysics@@QAEX_N@Z
 * func-address: 0x10140b10
 * callers: 0x10088cd0
 * callees: none
 */

void __thiscall NxPhysics::SetGameVisualization(NxPhysics *this, bool a2)
{
  int v3; // ecx
  void (__stdcall *v4)(int, _DWORD); // edx

  v3 = *((_DWORD *)this + 2);
  *((_BYTE *)this + 1) = a2;
  v4 = *(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 8);
  if ( a2 )
  {
    v4(9, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(39, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(40, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(34, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(33, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(11, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(12, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(13, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(14, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(27, 1.0);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 2) + 8))(*((_DWORD *)this + 2), 28, 1.0);
    (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 2) + 8))(29, 1.0);
  }
  else
  {
    v4(9, 0.0);
  }
}
