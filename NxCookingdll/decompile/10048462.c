/*
 * func-name: RtlUnwind
 * func-address: 0x10048462
 * callers: 0x10036d18, 0x1003c606, 0x10043ce4
 * callees: none
 */

// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}
