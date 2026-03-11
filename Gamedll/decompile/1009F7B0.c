/*
 * func-name: sub_1009F7B0
 * func-address: 0x1009f7b0
 * callers: 0x1000fd26
 * callees: none
 */

unsigned int __thiscall sub_1009F7B0(_DWORD *this, World *a2)
{
  unsigned int v3; // esi
  unsigned int result; // eax
  struct Actor **v5; // ebx
  int v6; // eax
  struct Actor **v7; // eax

  v3 = 0;
  result = std::vector<Actor *>::size(this[1]);
  if ( result )
  {
    do
    {
      if ( *(_DWORD *)std::vector<Actor *>::operator[](this[1], v3) )
      {
        if ( *(_DWORD *)(*(_DWORD *)std::vector<Actor *>::operator[](this[1], v3) + 712) )
        {
          v5 = (struct Actor **)std::vector<Actor *>::operator[](this[1], v3);
          v6 = std::vector<Actor *>::operator[](this[1], v3);
          World::RemoveActor(*(World **)(*(_DWORD *)v6 + 712), *v5);
        }
        if ( a2 )
        {
          v7 = (struct Actor **)std::vector<Actor *>::operator[](this[1], v3);
          World::AddActor(a2, *v7);
        }
      }
      ++v3;
      result = std::vector<Actor *>::size(this[1]);
    }
    while ( v3 < result );
  }
  return result;
}
