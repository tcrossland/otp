    <section>
      <title>Crypto Old API</title>
      <p>The <seeguide marker="crypto:new_api#the-old-api">Old API</seeguide> is now deprecated
      and has also been
      <seeguide marker="scheduled_for_removal#otp-24">scheduled for removal</seeguide>.</p>
      <p>For replacement functions see the
      <seeguide marker="crypto:new_api#the-new-api">New API</seeguide>.</p>
    </section>

    <section>
      <title>http_uri</title>
      <p>Since OTP 21 the recommended module to handle URIs is
      <seeerl marker="stdlib:uri_string">uri_string</seeerl>. The module
      http_uri does not provide a implementation that satisfies the
      RFC.
      </p>
    </section>

    <section>
	<title>ssh</title>
	<p>The public key algorithm <c>'ssh-rsa</c> is regarded as insecure due
	to its usage of SHA1, and is therfore deprecated.
	It will not be available by default from OTP-24.
	</p>

	<p>The public key algorithm <c>'ssh-dss</c> is regarded as insecure due
	to its usage of SHA1 and its short key length, and is therfore deprecated.
	It is not available by default from OTP-23.
	</p>
    </section>

    <section>
      <title>Distributed Disk Logs</title>
      <p>
	As of OTP 23, the distributed
	<seeerl marker="kernel:disk_log"><c>disk_log</c></seeerl>
	feature has been deprecated and it has also been
	<seeguide marker="scheduled_for_removal#otp-24">scheduled for removal</seeguide>
	in OTP 24.
      </p>
    </section>

    <section>
      <title>erl_interface registry</title>
      <p>
	As of OTP 23, the
	<seecref marker="erl_interface:registry"><c>registry</c></seecref>
	functionality part of
	<seeapp marker="erl_interface:index"><c>erl_interface</c></seeapp>
	has been deprecated and it has also been
	<seeguide marker="scheduled_for_removal#otp-24">scheduled for removal</seeguide>
	in OTP 24.
      </p>
    </section>
