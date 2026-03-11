/*
 * func-name: ?SetVisible@ActorGroup@@QAEX_N@Z
 * func-address: 0x10109a30
 * callers: none
 * callees: 0x10076ef0
 */

void __thiscall ActorGroup::SetVisible(ActorGroup *this, bool a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx

  for ( i = 0; i < std::vector<Model *>::size(this); ++i )
  {
    v4 = *((_DWORD *)this + 1);
    if ( !v4 || i >= (*((_DWORD *)this + 2) - v4) >> 2 )
      invalid_parameter_noinfo();
    v5 = *((_DWORD *)this + 1);
    if ( *(_DWORD *)(v5 + 4 * i) )
    {
      if ( !v5 || i >= (*((_DWORD *)this + 2) - v5) >> 2 )
        invalid_parameter_noinfo();
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * i) + 816) = !a2;
    }
  }
}
