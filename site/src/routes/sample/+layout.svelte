<script>
	import Title from '$lib/title.svelte';
	import '../../styles/global.css';
</script>

<header>
	<nav>
		<Title title="LWC" />
		<div class="links">
			<a href="/">Home</a>
			<a href="/about">About</a>
			<a href="/sample">Sample</a>
		</div>
	</nav>
</header>

<main>
	<!-- Page Content -->
	<slot />
</main>

<style>
	header {
		text-align: center;
		background: rgba(0, 0, 0, 0.1);
	}
	main {
		max-width: 960px;
		margin: 20px auto;
	}
	footer {
		text-align: center;
	}
	.links {
		margin-left: auto;
	}
	a {
		margin-left: 10px;
	}
	nav {
		display: flex;
		align-items: center;
		max-width: 960px;
		margin: 0 auto;
	}
</style>
