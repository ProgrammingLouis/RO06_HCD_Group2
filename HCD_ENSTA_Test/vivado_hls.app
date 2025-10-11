<project xmlns="com.autoesl.autopilot.project" name="HCD_ENSTA_Test" top="HLS_accel">
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" mflags="" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <includePaths xmlns=""/>
    <libraryFlag xmlns=""/>
    <files xmlns="">
        <file name="../../sources/HCD_test.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../sources/HCD.h" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="sources/HCD_accel.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="sol_auto_095" status=""/>
    </solutions>
</project>

