/*
 * func-name: ??0TraceLineSystemEx@@QAE@ABV0@@Z_0
 * func-address: 0x1009ec50
 * callers: 0x1001a609
 * callees: 0x10003549
 */

TraceLineSystemEx *__thiscall TraceLineSystemEx::TraceLineSystemEx(
        TraceLineSystemEx *this,
        const struct TraceLineSystemEx *a2)
{
  TraceLineSystem::TraceLineSystem(this, a2);
  *(_DWORD *)this = &TraceLineSystemEx::`vftable';
  *((float *)this + 88) = *((float *)a2 + 88);
  *((float *)this + 89) = *((float *)a2 + 89);
  *((float *)this + 90) = *((float *)a2 + 90);
  *((_BYTE *)this + 364) = *((_BYTE *)a2 + 364);
  *((float *)this + 92) = *((float *)a2 + 92);
  *((_BYTE *)this + 372) = *((_BYTE *)a2 + 372);
  return this;
}
