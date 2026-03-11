/*
 * func-name: ?InitProp@Script@@QAEXPAD0@Z
 * func-address: 0x10118ff0
 * callers: 0x101198c0
 * callees: 0x10097800, 0x10119160, 0x10119cc0
 */

void __thiscall Script::InitProp(Script *this, char *a2, char *a3)
{
  unsigned int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  const char *v15; // eax

  v4 = *(_DWORD *)this;
  v5 = sub_10119CC0();
  v6 = *(_DWORD *)(v5 + 8);
  v7 = v5 + 4;
  if ( !v6 || v4 >= (*(_DWORD *)(v7 + 8) - v6) / 40 )
    invalid_parameter_noinfo();
  v8 = 5 * v4;
  v9 = *(_DWORD *)this;
  v10 = *(_DWORD *)(v7 + 4) + 8 * v8;
  v11 = sub_10119CC0();
  v12 = *(_DWORD *)(v11 + 8);
  v13 = v11 + 4;
  if ( !v12 || v9 >= (*(_DWORD *)(v13 + 8) - v12) / 40 )
    invalid_parameter_noinfo();
  v14 = PyRun_String(a3, 258, *(_DWORD *)(*(_DWORD *)(v13 + 4) + 40 * v9 + 8), *(_DWORD *)(v10 + 8));
  if ( PyObject_SetAttrString(*((_DWORD *)this + 33), a2, v14) < 0 )
  {
    v15 = (const char *)sub_10119160();
    Warning("Error setting script variable '%s' to '%s': Reason: %s", a2, a3, v15);
  }
}
