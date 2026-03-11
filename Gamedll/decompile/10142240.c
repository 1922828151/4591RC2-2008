/*
 * func-name: ?Update@AuraManager@GameClient@@QAEXM@Z_0
 * func-address: 0x10142240
 * callers: 0x1000533a
 * callees: none
 */

void __thiscall GameClient::AuraManager::Update(GameClient::AuraManager *this, float a2)
{
  int *v2; // esi
  int **v3; // edi

  v2 = (int *)**((_DWORD **)this + 2);
  v3 = (int **)((char *)this + 4);
  while ( v2 != v3[1] )
  {
    if ( v2[3] )
    {
      if ( v2 == v3[1] )
        _invalid_parameter_noinfo();
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2[3] + 32))(LODWORD(a2));
    }
    if ( v2 == v3[1] )
      _invalid_parameter_noinfo();
    v2 = (int *)*v2;
  }
}
