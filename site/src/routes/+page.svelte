<script>
	import CryptoJS from 'crypto-js';

	// HMAC w/ CryptoJS
	const creation = (privateKey, message) => {
		const hash = CryptoJS.HmacSHA256(message, privateKey);
		return hash;
	};

	function add(a, b) {
		return a + b;
	}

	function diagnostics() {
		let flag = 'Hello, world.';
		console.log(flag);
	}

	let width;
	let height;
	let size = 42;
	let text = 'input';

	import { onMount } from 'svelte';

	let time = new Date();

	$: hours = time.getHours();
	$: minutes = time.getMinutes();
	$: seconds = time.getSeconds();

	onMount(() => {
		const interval = setInterval(() => {
			time = new Date();
		}, 1000);

		return () => {
			clearInterval(interval);
		};
	});

	// [I/O]

	let initial = 'abc';

	let final = 'xyz';
</script>

<div class="index">
	<div>
		<p>Focusing on the optimization of cryptographic algorithms for constrained environments.</p>
	</div>

	<div>
		<h3>
			<a href="https://en.wikipedia.org/wiki/HMAC"><em>HmacSHA256</em></a>
		</h3>

		<p>Hash-based Message Authentication Codes</p>

		<div>
			<input type="text" id="key" name="key" placeholder="Key" bind:value={initial} />

			<br />

			<input type="text" id="data" name="data" placeholder="Data" bind:value={final} />

			<br />

			<!-- Pass values from input box to created value. -->

			<div>
				<p>
					Output:

					{creation(initial, final)}
				</p>
			</div>
		</div>

		<hr />

		<h3>Object Permutation</h3>

		<h5>Permutation vs. Combination</h5>

		<!-- 5 x 5 grid  -->

		<input type="radio" />

		<p>Clock</p>

		<p>{time.toLocaleTimeString()}</p>

		<button on:click={diagnostics}>Diagnostics</button>

		<h3>Sponge Demostration</h3>

		<input type="range" bind:value={size} />
		<input bind:value={text} />

		<p>size: {width}px x {height}px</p>

		<div bind:clientWidth={width} bind:clientHeight={height}>
			<span>{text}</span>
		</div>
	</div>

	<br />

	<div>
		<h2>Ascon Implementation</h2>

		<em>Coming soon!</em>

		<h3>Encryption</h3>

		<form method="POST">
			<label>
				Hello, world.
				<input name="plaintext" type="text" value="Hello, world." />
			</label>
			<button>Send</button>
		</form>

		<h3>Decryption</h3>

		<h3>Applications</h3>
	</div>

	<div>
		<h3>Further Reading</h3>

		<h5>
			<a href="sample/nonce/">Nonce</a>
			<a href="sample/round/">Round Count</a>
			<a href="sample/key">Key Size</a>
			<a href="sample/block/">Block Size</a>
		</h5>
	</div>

	<div>
		<h6>🤖 <a href="https://github.com/TechSolomon/lightweight-cryptography">Source Code</a></h6>
	</div>
</div>

<style>
	input {
		width: 5em;
	}
</style>
