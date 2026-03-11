/*
 * func-name: sub_10207550
 * func-address: 0x10207550
 * callers: 0x10007937
 * callees: 0x1000516e, 0x1000e56b, 0x100154d3
 */

struct Game *__thiscall sub_10207550(int this)
{
  struct Game *result; // eax
  int v3; // [esp-4h] [ebp-8h]
  int v4; // [esp+0h] [ebp-4h]
  int v5; // [esp+0h] [ebp-4h]

  result = (struct Game *)Engine::Instance(v4);
  if ( *((int *)result + 37) > 0 )
  {
    sub_1000E56B(*(_DWORD *)(this + 244), v5);
    result = (struct Game *)sub_100154D3(v3);
  }
  if ( *(_DWORD *)(this + 296) )
  {
    result = Game::Instance();
    if ( !*((_BYTE *)result + 116) )
      return (struct Game *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 296) + 4))(
                              *(_DWORD *)(this + 296),
                              this);
  }
  return result;
}
