/*
 * func-name: ?SetFloatVar@PostProcessEffect@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
 * func-address: 0x101066f0
 * callers: none
 * callees: none
 */

int __thiscall PostProcessEffect::SetFloatVar(_DWORD *this, int a2, float a3)
{
  _DWORD *v3; // edi
  int (__stdcall **v4)(_DWORD *, int, _DWORD); // esi
  int v5; // eax

  v3 = *(_DWORD **)(*(_DWORD *)(this[1] + 152) + 16);
  v4 = (int (__stdcall **)(_DWORD *, int, _DWORD))(*v3 + 120);
  v5 = std::string::c_str(a2);
  return (*v4)(v3, v5, LODWORD(a3));
}
