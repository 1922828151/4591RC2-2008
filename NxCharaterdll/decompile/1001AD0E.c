/*
 * func-name: RtlUnwind
 * func-address: 0x1001ad0e
 * callers: 0x1000a0ec, 0x10014722, 0x10014940
 * callees: none
 */

// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}
