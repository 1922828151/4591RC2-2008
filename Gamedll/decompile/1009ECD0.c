/*
 * func-name: ??0RandomTextureTraceLine@@QAE@ABV0@@Z_0
 * func-address: 0x1009ecd0
 * callers: 0x1001989e
 * callees: 0x10003549, 0x100056c8, 0x100065e1
 */

RandomTextureTraceLine *__thiscall RandomTextureTraceLine::RandomTextureTraceLine(
        RandomTextureTraceLine *this,
        const struct RandomTextureTraceLine *a2)
{
  TraceLineSystem::TraceLineSystem(this, a2);
  *(_DWORD *)this = &RandomTextureTraceLine::`vftable';
  sub_100056C8((int)a2 + 352);
  std::vector<Material *>::vector<Material *>((char *)this + 368, (char *)a2 + 368);
  sub_100065E1((int)a2 + 384);
  *((_BYTE *)this + 400) = *((_BYTE *)a2 + 400);
  return this;
}
